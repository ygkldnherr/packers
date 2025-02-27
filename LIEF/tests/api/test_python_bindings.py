#!/usr/bin/env python
import sys
import pytest

import lief
from utils import get_sample

lief.logging.set_level(lief.logging.LEVEL.INFO)

def test_one_liner():
    assert len(lief.parse(get_sample("MachO/issue_853_classes_15.bin")).sections[0].name) > 0

def test_abstract_concrete():
    filepath = get_sample("PE/PE32_x86_binary_cmd.exe")
    assert isinstance(lief.parse(filepath).abstract, lief.Binary)
    assert isinstance(lief.parse(filepath).abstract.concrete, lief.PE.Binary)
    assert isinstance(lief.parse(filepath).concrete.abstract, lief.Binary)
    assert isinstance(lief.parse(filepath).concrete.abstract.concrete, lief.PE.Binary)

def test_invalid_enum():
    """From: issues/1128 """
    with pytest.raises(ValueError) as error:
        lief.ELF.Header.VERSION.from_value(2)

    assert lief.ELF.Header.VERSION.from_value(0) == lief.ELF.Header.VERSION.NONE


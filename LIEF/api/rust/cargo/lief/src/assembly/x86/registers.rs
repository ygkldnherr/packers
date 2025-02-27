#[allow(non_camel_case_types)]
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum Reg {
  NoRegister,
  AH,
  AL,
  AX,
  BH,
  BL,
  BP,
  BPH,
  BPL,
  BX,
  CH,
  CL,
  CS,
  CX,
  DF,
  DH,
  DI,
  DIH,
  DIL,
  DL,
  DS,
  DX,
  EAX,
  EBP,
  EBX,
  ECX,
  EDI,
  EDX,
  EFLAGS,
  EIP,
  EIZ,
  ES,
  ESI,
  ESP,
  FPCW,
  FPSW,
  FS,
  FS_BASE,
  GS,
  GS_BASE,
  HAX,
  HBP,
  HBX,
  HCX,
  HDI,
  HDX,
  HIP,
  HSI,
  HSP,
  IP,
  MXCSR,
  RAX,
  RBP,
  RBX,
  RCX,
  RDI,
  RDX,
  RFLAGS,
  RIP,
  RIZ,
  RSI,
  RSP,
  SI,
  SIH,
  SIL,
  SP,
  SPH,
  SPL,
  SS,
  SSP,
  _EFLAGS,
  CR0,
  CR1,
  CR2,
  CR3,
  CR4,
  CR5,
  CR6,
  CR7,
  CR8,
  CR9,
  CR10,
  CR11,
  CR12,
  CR13,
  CR14,
  CR15,
  DR0,
  DR1,
  DR2,
  DR3,
  DR4,
  DR5,
  DR6,
  DR7,
  DR8,
  DR9,
  DR10,
  DR11,
  DR12,
  DR13,
  DR14,
  DR15,
  FP0,
  FP1,
  FP2,
  FP3,
  FP4,
  FP5,
  FP6,
  FP7,
  MM0,
  MM1,
  MM2,
  MM3,
  MM4,
  MM5,
  MM6,
  MM7,
  R8,
  R9,
  R10,
  R11,
  R12,
  R13,
  R14,
  R15,
  ST0,
  ST1,
  ST2,
  ST3,
  ST4,
  ST5,
  ST6,
  ST7,
  XMM0,
  XMM1,
  XMM2,
  XMM3,
  XMM4,
  XMM5,
  XMM6,
  XMM7,
  XMM8,
  XMM9,
  XMM10,
  XMM11,
  XMM12,
  XMM13,
  XMM14,
  XMM15,
  R8B,
  R9B,
  R10B,
  R11B,
  R12B,
  R13B,
  R14B,
  R15B,
  R8BH,
  R9BH,
  R10BH,
  R11BH,
  R12BH,
  R13BH,
  R14BH,
  R15BH,
  R8D,
  R9D,
  R10D,
  R11D,
  R12D,
  R13D,
  R14D,
  R15D,
  R8W,
  R9W,
  R10W,
  R11W,
  R12W,
  R13W,
  R14W,
  R15W,
  R8WH,
  R9WH,
  R10WH,
  R11WH,
  R12WH,
  R13WH,
  R14WH,
  R15WH,
  YMM0,
  YMM1,
  YMM2,
  YMM3,
  YMM4,
  YMM5,
  YMM6,
  YMM7,
  YMM8,
  YMM9,
  YMM10,
  YMM11,
  YMM12,
  YMM13,
  YMM14,
  YMM15,
  K0,
  K1,
  K2,
  K3,
  K4,
  K5,
  K6,
  K7,
  XMM16,
  XMM17,
  XMM18,
  XMM19,
  XMM20,
  XMM21,
  XMM22,
  XMM23,
  XMM24,
  XMM25,
  XMM26,
  XMM27,
  XMM28,
  XMM29,
  XMM30,
  XMM31,
  YMM16,
  YMM17,
  YMM18,
  YMM19,
  YMM20,
  YMM21,
  YMM22,
  YMM23,
  YMM24,
  YMM25,
  YMM26,
  YMM27,
  YMM28,
  YMM29,
  YMM30,
  YMM31,
  ZMM0,
  ZMM1,
  ZMM2,
  ZMM3,
  ZMM4,
  ZMM5,
  ZMM6,
  ZMM7,
  ZMM8,
  ZMM9,
  ZMM10,
  ZMM11,
  ZMM12,
  ZMM13,
  ZMM14,
  ZMM15,
  ZMM16,
  ZMM17,
  ZMM18,
  ZMM19,
  ZMM20,
  ZMM21,
  ZMM22,
  ZMM23,
  ZMM24,
  ZMM25,
  ZMM26,
  ZMM27,
  ZMM28,
  ZMM29,
  ZMM30,
  ZMM31,
  K0_K1,
  K2_K3,
  K4_K5,
  K6_K7,
  TMMCFG,
  TMM0,
  TMM1,
  TMM2,
  TMM3,
  TMM4,
  TMM5,
  TMM6,
  TMM7,
  R16,
  R17,
  R18,
  R19,
  R20,
  R21,
  R22,
  R23,
  R24,
  R25,
  R26,
  R27,
  R28,
  R29,
  R30,
  R31,
  R16B,
  R17B,
  R18B,
  R19B,
  R20B,
  R21B,
  R22B,
  R23B,
  R24B,
  R25B,
  R26B,
  R27B,
  R28B,
  R29B,
  R30B,
  R31B,
  R16BH,
  R17BH,
  R18BH,
  R19BH,
  R20BH,
  R21BH,
  R22BH,
  R23BH,
  R24BH,
  R25BH,
  R26BH,
  R27BH,
  R28BH,
  R29BH,
  R30BH,
  R31BH,
  R16D,
  R17D,
  R18D,
  R19D,
  R20D,
  R21D,
  R22D,
  R23D,
  R24D,
  R25D,
  R26D,
  R27D,
  R28D,
  R29D,
  R30D,
  R31D,
  R16W,
  R17W,
  R18W,
  R19W,
  R20W,
  R21W,
  R22W,
  R23W,
  R24W,
  R25W,
  R26W,
  R27W,
  R28W,
  R29W,
  R30W,
  R31W,
  R16WH,
  R17WH,
  R18WH,
  R19WH,
  R20WH,
  R21WH,
  R22WH,
  R23WH,
  R24WH,
  R25WH,
  R26WH,
  R27WH,
  R28WH,
  R29WH,
  R30WH,
  R31WH,
  NUM_TARGET_REGS,
  UNKNOWN(u64),
}

impl From<u64> for Reg {
    fn from(value: u64) -> Self {
        match value {
          0 => Reg::NoRegister,
          1 => Reg::AH,
          2 => Reg::AL,
          3 => Reg::AX,
          4 => Reg::BH,
          5 => Reg::BL,
          6 => Reg::BP,
          7 => Reg::BPH,
          8 => Reg::BPL,
          9 => Reg::BX,
          10 => Reg::CH,
          11 => Reg::CL,
          12 => Reg::CS,
          13 => Reg::CX,
          14 => Reg::DF,
          15 => Reg::DH,
          16 => Reg::DI,
          17 => Reg::DIH,
          18 => Reg::DIL,
          19 => Reg::DL,
          20 => Reg::DS,
          21 => Reg::DX,
          22 => Reg::EAX,
          23 => Reg::EBP,
          24 => Reg::EBX,
          25 => Reg::ECX,
          26 => Reg::EDI,
          27 => Reg::EDX,
          28 => Reg::EFLAGS,
          29 => Reg::EIP,
          30 => Reg::EIZ,
          31 => Reg::ES,
          32 => Reg::ESI,
          33 => Reg::ESP,
          34 => Reg::FPCW,
          35 => Reg::FPSW,
          36 => Reg::FS,
          37 => Reg::FS_BASE,
          38 => Reg::GS,
          39 => Reg::GS_BASE,
          40 => Reg::HAX,
          41 => Reg::HBP,
          42 => Reg::HBX,
          43 => Reg::HCX,
          44 => Reg::HDI,
          45 => Reg::HDX,
          46 => Reg::HIP,
          47 => Reg::HSI,
          48 => Reg::HSP,
          49 => Reg::IP,
          50 => Reg::MXCSR,
          51 => Reg::RAX,
          52 => Reg::RBP,
          53 => Reg::RBX,
          54 => Reg::RCX,
          55 => Reg::RDI,
          56 => Reg::RDX,
          57 => Reg::RFLAGS,
          58 => Reg::RIP,
          59 => Reg::RIZ,
          60 => Reg::RSI,
          61 => Reg::RSP,
          62 => Reg::SI,
          63 => Reg::SIH,
          64 => Reg::SIL,
          65 => Reg::SP,
          66 => Reg::SPH,
          67 => Reg::SPL,
          68 => Reg::SS,
          69 => Reg::SSP,
          70 => Reg::_EFLAGS,
          71 => Reg::CR0,
          72 => Reg::CR1,
          73 => Reg::CR2,
          74 => Reg::CR3,
          75 => Reg::CR4,
          76 => Reg::CR5,
          77 => Reg::CR6,
          78 => Reg::CR7,
          79 => Reg::CR8,
          80 => Reg::CR9,
          81 => Reg::CR10,
          82 => Reg::CR11,
          83 => Reg::CR12,
          84 => Reg::CR13,
          85 => Reg::CR14,
          86 => Reg::CR15,
          87 => Reg::DR0,
          88 => Reg::DR1,
          89 => Reg::DR2,
          90 => Reg::DR3,
          91 => Reg::DR4,
          92 => Reg::DR5,
          93 => Reg::DR6,
          94 => Reg::DR7,
          95 => Reg::DR8,
          96 => Reg::DR9,
          97 => Reg::DR10,
          98 => Reg::DR11,
          99 => Reg::DR12,
          100 => Reg::DR13,
          101 => Reg::DR14,
          102 => Reg::DR15,
          103 => Reg::FP0,
          104 => Reg::FP1,
          105 => Reg::FP2,
          106 => Reg::FP3,
          107 => Reg::FP4,
          108 => Reg::FP5,
          109 => Reg::FP6,
          110 => Reg::FP7,
          111 => Reg::MM0,
          112 => Reg::MM1,
          113 => Reg::MM2,
          114 => Reg::MM3,
          115 => Reg::MM4,
          116 => Reg::MM5,
          117 => Reg::MM6,
          118 => Reg::MM7,
          119 => Reg::R8,
          120 => Reg::R9,
          121 => Reg::R10,
          122 => Reg::R11,
          123 => Reg::R12,
          124 => Reg::R13,
          125 => Reg::R14,
          126 => Reg::R15,
          127 => Reg::ST0,
          128 => Reg::ST1,
          129 => Reg::ST2,
          130 => Reg::ST3,
          131 => Reg::ST4,
          132 => Reg::ST5,
          133 => Reg::ST6,
          134 => Reg::ST7,
          135 => Reg::XMM0,
          136 => Reg::XMM1,
          137 => Reg::XMM2,
          138 => Reg::XMM3,
          139 => Reg::XMM4,
          140 => Reg::XMM5,
          141 => Reg::XMM6,
          142 => Reg::XMM7,
          143 => Reg::XMM8,
          144 => Reg::XMM9,
          145 => Reg::XMM10,
          146 => Reg::XMM11,
          147 => Reg::XMM12,
          148 => Reg::XMM13,
          149 => Reg::XMM14,
          150 => Reg::XMM15,
          151 => Reg::R8B,
          152 => Reg::R9B,
          153 => Reg::R10B,
          154 => Reg::R11B,
          155 => Reg::R12B,
          156 => Reg::R13B,
          157 => Reg::R14B,
          158 => Reg::R15B,
          159 => Reg::R8BH,
          160 => Reg::R9BH,
          161 => Reg::R10BH,
          162 => Reg::R11BH,
          163 => Reg::R12BH,
          164 => Reg::R13BH,
          165 => Reg::R14BH,
          166 => Reg::R15BH,
          167 => Reg::R8D,
          168 => Reg::R9D,
          169 => Reg::R10D,
          170 => Reg::R11D,
          171 => Reg::R12D,
          172 => Reg::R13D,
          173 => Reg::R14D,
          174 => Reg::R15D,
          175 => Reg::R8W,
          176 => Reg::R9W,
          177 => Reg::R10W,
          178 => Reg::R11W,
          179 => Reg::R12W,
          180 => Reg::R13W,
          181 => Reg::R14W,
          182 => Reg::R15W,
          183 => Reg::R8WH,
          184 => Reg::R9WH,
          185 => Reg::R10WH,
          186 => Reg::R11WH,
          187 => Reg::R12WH,
          188 => Reg::R13WH,
          189 => Reg::R14WH,
          190 => Reg::R15WH,
          191 => Reg::YMM0,
          192 => Reg::YMM1,
          193 => Reg::YMM2,
          194 => Reg::YMM3,
          195 => Reg::YMM4,
          196 => Reg::YMM5,
          197 => Reg::YMM6,
          198 => Reg::YMM7,
          199 => Reg::YMM8,
          200 => Reg::YMM9,
          201 => Reg::YMM10,
          202 => Reg::YMM11,
          203 => Reg::YMM12,
          204 => Reg::YMM13,
          205 => Reg::YMM14,
          206 => Reg::YMM15,
          207 => Reg::K0,
          208 => Reg::K1,
          209 => Reg::K2,
          210 => Reg::K3,
          211 => Reg::K4,
          212 => Reg::K5,
          213 => Reg::K6,
          214 => Reg::K7,
          215 => Reg::XMM16,
          216 => Reg::XMM17,
          217 => Reg::XMM18,
          218 => Reg::XMM19,
          219 => Reg::XMM20,
          220 => Reg::XMM21,
          221 => Reg::XMM22,
          222 => Reg::XMM23,
          223 => Reg::XMM24,
          224 => Reg::XMM25,
          225 => Reg::XMM26,
          226 => Reg::XMM27,
          227 => Reg::XMM28,
          228 => Reg::XMM29,
          229 => Reg::XMM30,
          230 => Reg::XMM31,
          231 => Reg::YMM16,
          232 => Reg::YMM17,
          233 => Reg::YMM18,
          234 => Reg::YMM19,
          235 => Reg::YMM20,
          236 => Reg::YMM21,
          237 => Reg::YMM22,
          238 => Reg::YMM23,
          239 => Reg::YMM24,
          240 => Reg::YMM25,
          241 => Reg::YMM26,
          242 => Reg::YMM27,
          243 => Reg::YMM28,
          244 => Reg::YMM29,
          245 => Reg::YMM30,
          246 => Reg::YMM31,
          247 => Reg::ZMM0,
          248 => Reg::ZMM1,
          249 => Reg::ZMM2,
          250 => Reg::ZMM3,
          251 => Reg::ZMM4,
          252 => Reg::ZMM5,
          253 => Reg::ZMM6,
          254 => Reg::ZMM7,
          255 => Reg::ZMM8,
          256 => Reg::ZMM9,
          257 => Reg::ZMM10,
          258 => Reg::ZMM11,
          259 => Reg::ZMM12,
          260 => Reg::ZMM13,
          261 => Reg::ZMM14,
          262 => Reg::ZMM15,
          263 => Reg::ZMM16,
          264 => Reg::ZMM17,
          265 => Reg::ZMM18,
          266 => Reg::ZMM19,
          267 => Reg::ZMM20,
          268 => Reg::ZMM21,
          269 => Reg::ZMM22,
          270 => Reg::ZMM23,
          271 => Reg::ZMM24,
          272 => Reg::ZMM25,
          273 => Reg::ZMM26,
          274 => Reg::ZMM27,
          275 => Reg::ZMM28,
          276 => Reg::ZMM29,
          277 => Reg::ZMM30,
          278 => Reg::ZMM31,
          279 => Reg::K0_K1,
          280 => Reg::K2_K3,
          281 => Reg::K4_K5,
          282 => Reg::K6_K7,
          283 => Reg::TMMCFG,
          284 => Reg::TMM0,
          285 => Reg::TMM1,
          286 => Reg::TMM2,
          287 => Reg::TMM3,
          288 => Reg::TMM4,
          289 => Reg::TMM5,
          290 => Reg::TMM6,
          291 => Reg::TMM7,
          292 => Reg::R16,
          293 => Reg::R17,
          294 => Reg::R18,
          295 => Reg::R19,
          296 => Reg::R20,
          297 => Reg::R21,
          298 => Reg::R22,
          299 => Reg::R23,
          300 => Reg::R24,
          301 => Reg::R25,
          302 => Reg::R26,
          303 => Reg::R27,
          304 => Reg::R28,
          305 => Reg::R29,
          306 => Reg::R30,
          307 => Reg::R31,
          308 => Reg::R16B,
          309 => Reg::R17B,
          310 => Reg::R18B,
          311 => Reg::R19B,
          312 => Reg::R20B,
          313 => Reg::R21B,
          314 => Reg::R22B,
          315 => Reg::R23B,
          316 => Reg::R24B,
          317 => Reg::R25B,
          318 => Reg::R26B,
          319 => Reg::R27B,
          320 => Reg::R28B,
          321 => Reg::R29B,
          322 => Reg::R30B,
          323 => Reg::R31B,
          324 => Reg::R16BH,
          325 => Reg::R17BH,
          326 => Reg::R18BH,
          327 => Reg::R19BH,
          328 => Reg::R20BH,
          329 => Reg::R21BH,
          330 => Reg::R22BH,
          331 => Reg::R23BH,
          332 => Reg::R24BH,
          333 => Reg::R25BH,
          334 => Reg::R26BH,
          335 => Reg::R27BH,
          336 => Reg::R28BH,
          337 => Reg::R29BH,
          338 => Reg::R30BH,
          339 => Reg::R31BH,
          340 => Reg::R16D,
          341 => Reg::R17D,
          342 => Reg::R18D,
          343 => Reg::R19D,
          344 => Reg::R20D,
          345 => Reg::R21D,
          346 => Reg::R22D,
          347 => Reg::R23D,
          348 => Reg::R24D,
          349 => Reg::R25D,
          350 => Reg::R26D,
          351 => Reg::R27D,
          352 => Reg::R28D,
          353 => Reg::R29D,
          354 => Reg::R30D,
          355 => Reg::R31D,
          356 => Reg::R16W,
          357 => Reg::R17W,
          358 => Reg::R18W,
          359 => Reg::R19W,
          360 => Reg::R20W,
          361 => Reg::R21W,
          362 => Reg::R22W,
          363 => Reg::R23W,
          364 => Reg::R24W,
          365 => Reg::R25W,
          366 => Reg::R26W,
          367 => Reg::R27W,
          368 => Reg::R28W,
          369 => Reg::R29W,
          370 => Reg::R30W,
          371 => Reg::R31W,
          372 => Reg::R16WH,
          373 => Reg::R17WH,
          374 => Reg::R18WH,
          375 => Reg::R19WH,
          376 => Reg::R20WH,
          377 => Reg::R21WH,
          378 => Reg::R22WH,
          379 => Reg::R23WH,
          380 => Reg::R24WH,
          381 => Reg::R25WH,
          382 => Reg::R26WH,
          383 => Reg::R27WH,
          384 => Reg::R28WH,
          385 => Reg::R29WH,
          386 => Reg::R30WH,
          387 => Reg::R31WH,
          388 => Reg::NUM_TARGET_REGS,
          _ => Reg::UNKNOWN(value),
        }
    }
}

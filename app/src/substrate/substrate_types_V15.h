/*******************************************************************************
 *  (c) 2019 - 2022 Zondax GmbH
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include <stddef.h>
#include <stdint.h>

// Based
// https://github.com/paritytech/substrate/blob/master/node/primitives/src/lib.rs

typedef struct {
    pd_u128_t value;
} pd_Rate_V15_t;

typedef struct {
    uint32_t value;
} pd_Ratio_V15_t;

typedef struct {
    pd_Rate_V15_t baseRate;
} pd_CurveModel_V15_t;

typedef struct {
    uint32_t value;
} pd_EraIndex_V15_t;

typedef struct {
    pd_Rate_V15_t baseRate;
    pd_Rate_V15_t jumpRate;
    pd_Rate_V15_t fullRate;
    pd_Ratio_V15_t jumpUtilization;
} pd_JumpModel_V15_t;

typedef struct {
    pd_Compactu128_t value;
    pd_Compactu32_t era;
} pd_UnlockChunk_V15_t;

typedef struct {
    const uint8_t* _ptr;
} pd_AccountId_V15_t;

typedef struct {
    uint32_t value;
} pd_AssetIdOf_V15_t;

typedef struct {
    compactInt_t value;
} pd_CompactAccountIndex_V15_t;

typedef struct {
    uint8_t value;
} pd_ContributionStrategy_V15_t;

typedef struct {
    uint32_t value;
} pd_CurrencyId_V15_t;

typedef struct {
    uint8_t value;
    union {
        pd_JumpModel_V15_t jump;
        pd_CurveModel_V15_t curve;
    };
} pd_InterestRateModel_V15_t;

typedef struct {
    uint8_t value;
} pd_MarketState_V15_t;

typedef struct {
    uint8_t value;
} pd_ProxyType_V15_t;

typedef struct {
    pd_BlockNumber_t height;
    uint32_t index;
} pd_Timepoint_V15_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecEraIndex_V15_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecUnlockChunk_V15_t;

typedef struct {
    pd_BlockNumber_t start;
    pd_BlockNumber_t period;
    uint32_t periodCount;
    pd_Compactu128_t perPeriod;
} pd_VestingScheduleOf_V15_t;

typedef struct {
    pd_AssetIdOf_V15_t assetid1;
    pd_AssetIdOf_V15_t assetid2;
} pd_AssetIdOfAssetIdOf_V15_t;

typedef struct {
    pd_Balance_t balance1;
    pd_Balance_t balance2;
} pd_BalanceOfBalanceOf_V15_t;

typedef struct {
    pd_CurrencyId_V15_t id;
    pd_bool_t external;
    pd_Balance_t fee;
    pd_bool_t enable;
    pd_Balance_t outCap;
    pd_Balance_t outAmount;
    pd_Balance_t inCap;
    pd_Balance_t inAmount;
} pd_BridgeToken_V15_t;

typedef struct {
    pd_Compactu32_t accounts;
    pd_Compactu32_t sufficients;
    pd_Compactu32_t approvals;
} pd_DestroyWitness_V15_t;

typedef struct {
    uint8_t value;
    union {
        pd_AccountId_V15_t id;
        pd_CompactAccountIndex_V15_t index;
        pd_Bytes_t raw;
        const uint8_t* _ptr;
    };
} pd_LookupasStaticLookupSource_V15_t;

typedef struct {
    pd_Ratio_V15_t collateralFactor;
    pd_Ratio_V15_t liquidationThreshold;
    pd_Ratio_V15_t reserveFactor;
    pd_Ratio_V15_t closeFactor;
    pd_Rate_V15_t liquidateIncentive;
    pd_Ratio_V15_t liquidateIncentiveReservedFactor;
    pd_InterestRateModel_V15_t rateModel;
    pd_MarketState_V15_t state;
    pd_Balance_t supplyCap;
    pd_Balance_t borrowCap;
    pd_CurrencyId_V15_t ptokenId;
} pd_MarketBalanceOfT_V15_t;

typedef struct {
    pd_Call_t call;
} pd_OpaqueCall_V15_t;

typedef struct {
    uint8_t some;
    pd_Timepoint_V15_t contained;
} pd_OptionTimepoint_V15_t;

typedef struct {
    pd_u128_t value;
} pd_Price_V15_t;

typedef struct {
    uint8_t value;
    pd_AccountId_V15_t accountId;
} pd_RewardDestination_V15_t;

typedef struct {
    pd_AccountId_V15_t stash;
    pd_Compactu128_t total;
    pd_Compactu128_t active;
    pd_VecUnlockChunk_V15_t unlocking;
    pd_VecEraIndex_V15_t claimedRewards;
} pd_StakingLedgerAccountIdBalanceOfT_V15_t;

typedef struct {
    pd_Vecu8_t value;
} pd_TeleAccount_V15_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecVestingScheduleOf_V15_t;

typedef struct {
    uint32_t value;
} pd_AssetIdOfT_V15_t;

typedef struct {
    uint8_t value;
} pd_BridgeType_V15_t;

typedef struct {
    const uint8_t* _ptr;
} pd_CallHashOf_V15_t;

typedef struct {
    uint32_t value;
} pd_ChainId_V15_t;

typedef struct {
    uint64_t value;
} pd_ChainNonce_V15_t;

typedef struct {
    uint8_t value;
} pd_Conviction_V15_t;

typedef struct {
    uint16_t value;
} pd_DerivativeIndex_V15_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Keys_V15_t;

typedef struct {
    uint32_t value;
} pd_LeasePeriod_V15_t;

typedef struct {
    uint32_t value;
} pd_MemberCount_V15_t;

typedef struct {
    uint8_t some;
    pd_AccountId_V15_t contained;
} pd_OptionAccountId_V15_t;

typedef struct {
    uint8_t some;
    pd_ContributionStrategy_V15_t contained;
} pd_OptionContributionStrategy_V15_t;

typedef struct {
    uint8_t some;
    pd_ProxyType_V15_t contained;
} pd_OptionProxyType_V15_t;

typedef struct {
    uint32_t value;
} pd_ParaId_V15_t;

typedef struct {
    uint32_t value;
} pd_Perbill_V15_t;

typedef struct {
    uint32_t value;
} pd_ReferendumIndex_V15_t;

typedef struct {
    uint32_t value;
} pd_RegistrarIndex_V15_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecAccountId_V15_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecAssetIdOf_V15_t;

typedef struct {
    uint64_t value;
} pd_Weight_V15_t;

#ifdef __cplusplus
}
#endif
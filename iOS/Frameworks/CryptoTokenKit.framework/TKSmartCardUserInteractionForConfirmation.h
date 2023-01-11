//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@class TKSmartCardSlot;

@interface TKSmartCardUserInteractionForConfirmation <NSSecureCoding>
{
    _Bool _result;
    TKSmartCardSlot *_slot;
}

+ (_Bool)supportsSecureCoding;
@property __weak TKSmartCardSlot *slot; // @synthesize slot=_slot;
@property _Bool result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)runWithReply:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

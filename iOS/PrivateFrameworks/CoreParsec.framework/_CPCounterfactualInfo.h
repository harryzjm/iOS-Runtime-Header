//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCounterfactualInfo-Protocol.h>

@class NSData, NSString;

@interface _CPCounterfactualInfo : PBCodable <_CPCounterfactualInfo, NSSecureCoding>
{
    _Bool _cfDiffered;
    _Bool _cfUsed;
    int _cfError;
}

@property(nonatomic) int cfError; // @synthesize cfError=_cfError;
@property(nonatomic) _Bool cfUsed; // @synthesize cfUsed=_cfUsed;
@property(nonatomic) _Bool cfDiffered; // @synthesize cfDiffered=_cfDiffered;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

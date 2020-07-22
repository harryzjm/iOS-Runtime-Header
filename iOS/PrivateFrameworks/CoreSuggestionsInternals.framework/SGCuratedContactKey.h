//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString, SGIdentityKey;

@interface SGCuratedContactKey : NSObject <SGEntityKey>
{
    SGIdentityKey *_identityKey;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
@property(readonly, nonatomic) SGIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToCuratedContactKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;
- (id)initWithExternalId:(int)arg1;
- (id)initWithIdentityKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


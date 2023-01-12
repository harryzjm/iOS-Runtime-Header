//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPseudonym;

@interface IDSServicePseudonymChange : NSObject
{
    IDSPseudonym *_pseudonym;
    unsigned long long _changeType;
    long long _updateFlags;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long updateFlags; // @synthesize updateFlags=_updateFlags;
@property(readonly, nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) IDSPseudonym *pseudonym; // @synthesize pseudonym=_pseudonym;
- (unsigned long long)hash;
- (_Bool)isEqualToPseudonymChange:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithPseudonym:(id)arg1 changeType:(unsigned long long)arg2 updateFlags:(long long)arg3;

@end

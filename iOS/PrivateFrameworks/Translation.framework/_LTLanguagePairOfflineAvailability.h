//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/NSSecureCoding-Protocol.h>

@class NSString, _LTLocalePair;

@interface _LTLanguagePairOfflineAvailability : NSObject <NSSecureCoding>
{
    _Bool _needsUpdate;
    unsigned long long _pairState;
    _LTLocalePair *_pair;
    NSString *_sourceASRState;
    NSString *_targetASRState;
    NSString *_mtState;
    NSString *_sourceTTSState;
    NSString *_targetTTSState;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(retain, nonatomic) NSString *targetTTSState; // @synthesize targetTTSState=_targetTTSState;
@property(retain, nonatomic) NSString *sourceTTSState; // @synthesize sourceTTSState=_sourceTTSState;
@property(retain, nonatomic) NSString *mtState; // @synthesize mtState=_mtState;
@property(retain, nonatomic) NSString *targetASRState; // @synthesize targetASRState=_targetASRState;
@property(retain, nonatomic) NSString *sourceASRState; // @synthesize sourceASRState=_sourceASRState;
@property(retain, nonatomic) _LTLocalePair *pair; // @synthesize pair=_pair;
@property(nonatomic) unsigned long long pairState; // @synthesize pairState=_pairState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithLocales:(id)arg1;

@end

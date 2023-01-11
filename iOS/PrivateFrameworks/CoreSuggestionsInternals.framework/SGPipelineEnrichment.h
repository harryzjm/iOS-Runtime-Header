//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SGPipelineEnrichment
{
    _Bool _pendingGeocode;
    NSData *_contentHash;
}

+ (id)socialProfile:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(_Bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
+ (id)instantMessageAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(_Bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
+ (id)birthday:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(_Bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
+ (id)emailAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(_Bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
+ (id)phoneNumber:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(_Bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
+ (id)address:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(_Bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
- (void).cxx_destruct;
@property(nonatomic) _Bool pendingGeocode; // @synthesize pendingGeocode=_pendingGeocode;
@property(retain, nonatomic) NSData *contentHash; // @synthesize contentHash=_contentHash;
- (id)loggingIdentifier;
- (_Bool)isPerson;
- (_Bool)isEvent;
- (void)setLastModifiedTimestamp:(struct SGUnixTimestamp_)arg1;
- (void)setCreationTimestamp:(struct SGUnixTimestamp_)arg1;
- (id)initWithContactDetailWithKey:(id)arg1 type:(unsigned long long)arg2 extractionInfo:(id)arg3 curated:(_Bool)arg4 parent:(id)arg5 value:(id)arg6 context:(id)arg7 contextRangeOfInterest:(struct _NSRange)arg8;
- (id)initWithIntentPersonAtDate:(id)arg1 bundleId:(id)arg2 handle:(id)arg3 displayName:(id)arg4;
- (id)initWithPseudoContactWithKey:(id)arg1 parent:(id)arg2 name:(id)arg3;
- (id)initWithDuplicateKey:(id)arg1 title:(id)arg2 parent:(id)arg3;
- (id)toCloudKitRecordWithId:(id)arg1 parentEntityType:(long long)arg2;

@end

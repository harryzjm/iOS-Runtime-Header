//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SGDetectedAttributeML;

@interface SGDetectedAttributeDissector
{
    SGDetectedAttributeML *_ml;
    unsigned long long _selfIdentificationMessageCount;
}

+ (void)clearConversationCache;
+ (id)currentPatterns;
+ (id)patterns;
+ (_Bool)isNameRequest:(id)arg1;
+ (_Bool)isMaybeNameContext:(id)arg1;
+ (_Bool)isPhoneContext:(id)arg1;
+ (_Bool)isAddressContext:(id)arg1;
+ (id)dissectorWithMockedMLTrainingForTests;
@property(nonatomic) unsigned long long selfIdentificationMessageCount; // @synthesize selfIdentificationMessageCount=_selfIdentificationMessageCount;
- (void).cxx_destruct;
- (id)detailTypeFromPrefix:(id)arg1;
- (id)detailTypeFromPrefix:(id)arg1 detectedLabelPointer:(struct _NSRange *)arg2;
- (id)getLineContaining:(struct _NSRange)arg1 inText:(id)arg2;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (void)handleTextMessageSelfIdentification:(id)arg1;
- (id)processTextMessageConversation:(id)arg1 messageIndex:(unsigned long long)arg2;
- (id)filterDangerousSigDetections:(id)arg1 onEntity:(id)arg2 inContext:(id)arg3;
- (id)filterDangerousSigEmailDetections:(id)arg1 onEntity:(id)arg2 inContext:(id)arg3;
- (id)_makeSimplifiedListIdEmail:(id)arg1;
- (id)_makeAlnum:(id)arg1;
- (id)_extractEmailishTokenFromMailHeader:(id)arg1;
- (id)filterDangerousSigAddressDetections:(id)arg1 onEntity:(id)arg2;
- (id)filterDangerousSigPhoneDetections:(id)arg1 onEntity:(id)arg2;
- (id)detectionFromBodyDDMatch:(id)arg1 onEntity:(id)arg2 withSupervisionToFill:(id)arg3;
- (id)detectionFromSignatureDDMatch:(id)arg1 onEntity:(id)arg2 detectedLabelRange:(struct _NSRange *)arg3 lastClaimedLabelRange:(struct _NSRange)arg4;
- (id)init;
- (id)initWithML:(id)arg1;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SASToken <SAAceSerializable>
{
}

+ (id)tokenWithDictionary:(id)arg1 context:(id)arg2;
+ (id)token;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSNumber *startTime;
@property(copy, nonatomic) NSNumber *silenceStartTime;
@property(nonatomic) _Bool removeSpaceBefore;
@property(nonatomic) _Bool removeSpaceAfter;
@property(copy, nonatomic) NSString *recognitionStability;
@property(copy, nonatomic) NSString *phoneSequence;
@property(copy, nonatomic) NSString *originalText;
@property(copy, nonatomic) NSNumber *endTime;
@property(copy, nonatomic) NSNumber *confidenceScore;
@property(nonatomic) _Bool addSpaceAfter;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

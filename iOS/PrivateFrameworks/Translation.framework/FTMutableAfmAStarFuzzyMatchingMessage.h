//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAStarFuzzyMatchingRequest, FTAStarFuzzyMatchingResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableAfmAStarFuzzyMatchingMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (Class)session_message_mutableClassForType:(long long)arg1;
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTAStarFuzzyMatchingResponse *session_messageAsFTAStarFuzzyMatchingResponse;
@property(copy, nonatomic) FTAStarFuzzyMatchingRequest *session_messageAsFTAStarFuzzyMatchingRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGRealtimeSuggestionMock : NSObject
{
}

+ (void)cleanupAfterMockSuggestion:(id)arg1;
+ (id)contactMatchesWithContact:(id)arg1;
+ (id)originFromRecordId:(id)arg1;
+ (_Bool)isMockSuggestion:(id)arg1;
+ (id)createRealtimeEvent:(id)arg1 error:(id *)arg2;
+ (id)createRealtimeContact:(id)arg1 error:(id *)arg2;
+ (id)createSuggestion:(id)arg1 error:(id *)arg2;
+ (id)dateFromObject:(id)arg1 error:(id *)arg2;
+ (id)contactDetailsFromData:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)parseData:(id)arg1 error:(id *)arg2;
+ (id)parseJson:(id)arg1 error:(id *)arg2;
+ (id)loadFromFile:(id)arg1 error:(id *)arg2;

@end


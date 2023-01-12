//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADDESRecordsManager : NSObject
{
    NSString *_searchRequestID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *searchRequestID; // @synthesize searchRequestID=_searchRequestID;
- (id)eventTypeToString:(long long)arg1;
- (id)_createRecordForAdData:(id)arg1 index:(unsigned long long)arg2 responseType:(id)arg3;
- (void)updateDESRecord:(id)arg1 forEvent:(long long)arg2;
- (void)addRerankedAdRecordsToDES:(id)arg1;
- (void)addOriginalAdRecordsToDES:(id)arg1 responseTypeString:(id)arg2 organics:(id)arg3;
- (id)init;

@end

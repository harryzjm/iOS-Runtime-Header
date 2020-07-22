//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WBWebsiteDataRecord;

@interface WBSettingsTask : NSObject
{
    long long _taskType;
    WBWebsiteDataRecord *_websiteDataRecord;
}

+ (id)taskForDeletingIndividualWebsiteDataWithRecord:(id)arg1;
+ (id)taskWithType:(long long)arg1;
@property(readonly, nonatomic) WBWebsiteDataRecord *websiteDataRecord; // @synthesize websiteDataRecord=_websiteDataRecord;
@property(readonly, nonatomic) long long taskType; // @synthesize taskType=_taskType;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 websiteDataRecord:(id)arg2;

@end

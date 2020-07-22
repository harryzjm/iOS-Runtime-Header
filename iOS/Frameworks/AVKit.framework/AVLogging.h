//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVLogging : NSObject
{
    long long _loggingLevel;
    NSMutableDictionary *_categories;
    NSMutableArray *_reusableLogQueue;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

+ (id)sharedLogging;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue; // @synthesize loggingQueue=_loggingQueue;
@property(retain, nonatomic) NSMutableArray *reusableLogQueue; // @synthesize reusableLogQueue=_reusableLogQueue;
@property(retain, nonatomic) NSMutableDictionary *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (void)popCategory:(id)arg1;
- (void)pushCategory:(id)arg1;
- (void)logTrustedString:(id)arg1 type:(unsigned char)arg2 logLevel:(long long)arg3;
- (void)actuallyLogString:(id)arg1 type:(unsigned char)arg2 logLevel:(long long)arg3;
- (void)logString:(id)arg1 type:(unsigned char)arg2 logLevel:(long long)arg3;
- (id)init;

@end


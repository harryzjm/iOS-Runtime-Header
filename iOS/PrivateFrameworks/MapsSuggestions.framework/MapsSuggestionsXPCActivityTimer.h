//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsTimer-Protocol.h>

@class NSDate, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsXPCActivityTimer <MapsSuggestionsTimer>
{
    CDUnknownBlockType _block;
    NSString *_activityIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_firesAt;
    unsigned long long _estimatedDownloadInBytes;
    unsigned long long _estimatedUploadInBytes;
}

- (void).cxx_destruct;
- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (id)objectForJSON;
@property(readonly, copy) NSString *description;
- (void)scheduleWithInterval:(struct Duration)arg1 repeatAfter:(struct Duration)arg2 leeway:(struct Duration)arg3;
- (void)scheduleWithInterval:(struct Duration)arg1 leeway:(struct Duration)arg2;
- (void)unschedule;
- (void)scheduleWithTimeInterval:(double)arg1 repeatAfter:(double)arg2 leeway:(double)arg3;
- (void)scheduleWithTimeInterval:(double)arg1 leeway:(double)arg2;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 estinatedDownload:(unsigned long long)arg2 estinatedUpload:(unsigned long long)arg3 queue:(id)arg4 block:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

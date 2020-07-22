//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSISO8601DateFormatter, NSString;
@protocol MSPJournaling, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSPJournal : NSObject
{
    NSString *_path;
    NSFileHandle *_writeHandle;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSISO8601DateFormatter *_dateFormatter;
    _Bool _analyticsEnabled;
    _Bool _loggingEnabled;
    _Bool _journalEnabled;
    NSString *_name;
    id <MSPJournaling> _delegate;
}

@property(nonatomic) __weak id <MSPJournaling> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)noteChangeWithState:(id)arg1 format:(id)arg2;
- (void)noteChangeWithState:(id)arg1 error:(id)arg2;
- (void)noteChangeWithState:(id)arg1 payload:(id)arg2;
- (void)noteChangeWithState:(id)arg1 affectedObject:(id)arg2;
- (void)noteChangeWithState:(id)arg1;
- (void)sendTelemetryForState:(id)arg1 affectedObject:(id)arg2;
- (void)appendToLog:(id)arg1 format:(id)arg2;
- (void)appendToJournal:(id)arg1 format:(id)arg2;
- (void)rotateLogIfNeeded;
- (id)filename;
- (id)rotatedPath;
@property(readonly, nonatomic) NSString *path;
- (void)dealloc;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithName:(id)arg1;

@end

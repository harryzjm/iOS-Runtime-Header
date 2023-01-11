//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/SFDownloadFileDelegate-Protocol.h>
#import <SafariServices/SFDownloadStorageUsageMonitorEntryDelegate-Protocol.h>

@class NSMutableDictionary, SFDownloadFile;
@protocol OS_dispatch_queue;

@interface _SFDownloadStorageUsageMonitor : NSObject <SFDownloadFileDelegate, SFDownloadStorageUsageMonitorEntryDelegate>
{
    NSMutableDictionary *_entries;
    SFDownloadFile *_historyFile;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)downloadFileDidChangeURL:(id)arg1;
- (void)downloadFileWillBeDeleted:(id)arg1;
- (void)downloadFileContentsDidChange:(id)arg1;
- (void)entryDidChangeUsage:(id)arg1;
- (void)_reloadDownloadHistory;
@property(readonly, nonatomic) long long usage;
- (id)init;

@end

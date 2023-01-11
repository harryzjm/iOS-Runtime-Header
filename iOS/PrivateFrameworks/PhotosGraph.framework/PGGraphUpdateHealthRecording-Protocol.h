//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@protocol PGGraphUpdateHealthRecording <NSObject>
- (void)endRecordingInBackground:(_Bool)arg1;
- (void)beginRecording;
- (void)recordTransactionSize:(unsigned long long)arg1;
- (void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1;
- (void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(_Bool)arg2;
- (void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(_Bool)arg2;
@end

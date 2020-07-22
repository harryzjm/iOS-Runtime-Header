//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLKComplication, NTKComplicationDataSource;
@protocol CLKComplicationDataSource;

@interface NTKTimelineDataOperation : NSObject
{
    NTKComplicationDataSource *_localDataSource;
    id <CLKComplicationDataSource> _remoteDataSource;
    CLKComplication *_remoteComplication;
    _Bool _started;
    _Bool _canceled;
}

+ (id)operationWithRemoteDataSource:(id)arg1 complication:(id)arg2;
+ (id)operationWithLocalDataSource:(id)arg1;
@property(readonly, nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) _Bool started; // @synthesize started=_started;
- (void).cxx_destruct;
- (id)_finalizedValidEntries:(id)arg1;
- (_Bool)_validateEntry:(id)arg1;
- (void)_cancel;
- (void)_start;
- (void)cancel;
- (void)start;

@end

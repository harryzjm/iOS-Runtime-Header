//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVVCConfigureAlertBehaviorSettings : NSObject
{
    unsigned long long _streamID;
    long long _startAlert;
    long long _stopAlert;
    long long _stopOnErrorAlert;
}

@property(nonatomic) long long stopOnErrorAlert; // @synthesize stopOnErrorAlert=_stopOnErrorAlert;
@property(nonatomic) long long stopAlert; // @synthesize stopAlert=_stopAlert;
@property(nonatomic) long long startAlert; // @synthesize startAlert=_startAlert;
@property(nonatomic) unsigned long long streamID; // @synthesize streamID=_streamID;
- (id)initWithStreamID:(unsigned long long)arg1;

@end

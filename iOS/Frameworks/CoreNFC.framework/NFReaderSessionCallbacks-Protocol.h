//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreNFC/NFSessionCallbackInterface-Protocol.h>
#import <CoreNFC/NSObject-Protocol.h>

@class NFTechnologyEvent, NSArray, NSError;

@protocol NFReaderSessionCallbacks <NSObject, NFSessionCallbackInterface>
- (void)didTerminate:(NSError *)arg1;

@optional
- (void)didDetectExternalReader:(NFTechnologyEvent *)arg1;
- (void)didDetectNDEFMessages:(NSArray *)arg1 fromTags:(NSArray *)arg2;
- (void)didDetectTags:(NSArray *)arg1;
@end

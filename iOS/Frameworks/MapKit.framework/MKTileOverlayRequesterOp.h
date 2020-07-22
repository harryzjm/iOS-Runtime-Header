//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MKTileOverlayRequester, NSData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKTileOverlayRequesterOp : NSObject
{
    struct _GEOTileKey _key;
    MKTileOverlayRequester *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSData *_data;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) __weak MKTileOverlayRequester *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct _GEOTileKey key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;

@end

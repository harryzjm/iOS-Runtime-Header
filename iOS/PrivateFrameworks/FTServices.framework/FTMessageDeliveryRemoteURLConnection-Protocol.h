//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/NSObject-Protocol.h>

@class NSString, NSURLRequest;

@protocol FTMessageDeliveryRemoteURLConnection <NSObject>
@property(copy) CDUnknownBlockType block;
@property(retain) NSURLRequest *request;
@property _Bool shouldReturnTimingData;
@property int keepAliveCell;
@property int keepAliveWifi;
@property _Bool disableKeepAlive;
@property int concurrentConnections;
@property _Bool shouldUsePipelining;
@property(retain) NSString *bundleIdentifierForDataUsage;
@property _Bool alwaysForceCellular;
@property _Bool forceCellularIfPossible;
@property _Bool requireIDSHost;
- (void)cancel;
- (void)load;
@end


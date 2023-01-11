//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLRequest;
@protocol OS_xpc_object;

@interface IDSRemoteURLConnection : NSObject
{
    NSURLRequest *_request;
    NSString *_bundleIdentifierForDataUsage;
    CDUnknownBlockType _block;
    NSObject<OS_xpc_object> *_connection;
    _Bool _cancelled;
    _Bool _loading;
    _Bool _forceCellularIfPossible;
    _Bool _alwaysForceCellular;
    int _retries;
    _Bool _requireIDSHost;
    _Bool _shouldUsePipelining;
    int _concurrentConnections;
    _Bool _disableKeepAlive;
    int _keepAliveWifi;
    int _keepAliveCell;
    _Bool _shouldReturnTimingData;
}

@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property _Bool alwaysForceCellular; // @synthesize alwaysForceCellular=_alwaysForceCellular;
@property _Bool shouldReturnTimingData; // @synthesize shouldReturnTimingData=_shouldReturnTimingData;
@property int keepAliveCell; // @synthesize keepAliveCell=_keepAliveCell;
@property int keepAliveWifi; // @synthesize keepAliveWifi=_keepAliveWifi;
@property _Bool disableKeepAlive; // @synthesize disableKeepAlive=_disableKeepAlive;
@property int concurrentConnections; // @synthesize concurrentConnections=_concurrentConnections;
@property _Bool shouldUsePipelining; // @synthesize shouldUsePipelining=_shouldUsePipelining;
@property _Bool requireIDSHost; // @synthesize requireIDSHost=_requireIDSHost;
@property(retain) NSString *bundleIdentifierForDataUsage; // @synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage;
@property _Bool forceCellularIfPossible; // @synthesize forceCellularIfPossible=_forceCellularIfPossible;
- (void).cxx_destruct;
- (void)cancel;
- (void)load;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1 completionBlockWithTimingData:(CDUnknownBlockType)arg2;
- (id)initWithURLRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_connect;
- (_Bool)_disconnect;
- (void)_disconnected;

@end


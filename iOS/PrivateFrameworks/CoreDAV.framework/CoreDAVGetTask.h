//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask
{
    id _appSpecificDataItemResult;
    _Bool _forceNoCache;
}

@property(nonatomic) _Bool forceNoCache; // @synthesize forceNoCache=_forceNoCache;
@property(retain, nonatomic) id appSpecificDataItemResult; // @synthesize appSpecificDataItemResult=_appSpecificDataItemResult;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (unsigned long long)cachePolicy;
- (id)httpMethod;
- (id)description;

// Remaining properties
@property(nonatomic) __weak id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end


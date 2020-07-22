//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WBSTouchIconFetchOperationResult : NSObject
{
    _Bool _favicon;
    _Bool _pageRequestDidSucceed;
    _Bool _higherPriorityIconDownloadFailedDueToNetworkError;
    UIImage *_touchIcon;
    NSString *_host;
}

+ (id)resultWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(_Bool)arg3 pageRequestDidSucceed:(_Bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(_Bool)arg5;
+ (id)resultForFetchFailureWithHost:(id)arg1 pageRequestDidSucceed:(_Bool)arg2;
@property(readonly, nonatomic) _Bool higherPriorityIconDownloadFailedDueToNetworkError; // @synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError;
@property(readonly, nonatomic) _Bool pageRequestDidSucceed; // @synthesize pageRequestDidSucceed=_pageRequestDidSucceed;
@property(readonly, nonatomic, getter=isFavicon) _Bool favicon; // @synthesize favicon=_favicon;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) UIImage *touchIcon; // @synthesize touchIcon=_touchIcon;
- (void).cxx_destruct;
- (id)initWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(_Bool)arg3 pageRequestDidSucceed:(_Bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(_Bool)arg5;

@end


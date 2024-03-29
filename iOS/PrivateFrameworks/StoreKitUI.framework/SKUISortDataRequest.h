//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIResourceRequest.h"

@class NSURL;
@protocol SKUISortDataRequestDelegate;

__attribute__((visibility("hidden")))
@interface SKUISortDataRequest : SKUIResourceRequest
{
    id <SKUISortDataRequestDelegate> _delegate;
    NSURL *_sortURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *sortURL; // @synthesize sortURL=_sortURL;
@property(nonatomic) __weak id <SKUISortDataRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newLoadOperation;
- (void)finishWithResource:(id)arg1;
- (id)initWithSortURL:(id)arg1;

@end


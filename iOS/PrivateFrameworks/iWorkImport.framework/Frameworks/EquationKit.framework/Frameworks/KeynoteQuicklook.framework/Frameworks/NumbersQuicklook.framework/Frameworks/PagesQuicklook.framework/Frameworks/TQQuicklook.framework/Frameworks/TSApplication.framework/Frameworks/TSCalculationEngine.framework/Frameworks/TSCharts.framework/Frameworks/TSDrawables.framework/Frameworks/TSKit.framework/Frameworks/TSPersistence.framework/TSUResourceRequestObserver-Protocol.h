//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/NSObject-Protocol.h>

@class NSError;
@protocol TSUResourceRequest;

@protocol TSUResourceRequestObserver <NSObject>
- (void)resourceRequestDidPerformResourceAccess:(id <TSUResourceRequest>)arg1 error:(NSError *)arg2;
- (void)resourceRequestWillPerformResourceAccess:(id <TSUResourceRequest>)arg1;
@end

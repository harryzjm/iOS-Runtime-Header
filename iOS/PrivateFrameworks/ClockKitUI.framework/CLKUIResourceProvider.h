//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol CLKUIResourceProviderDelegate;

@interface CLKUIResourceProvider : NSObject
{
    NSMutableSet *_uuidHistory;
    id <CLKUIResourceProviderDelegate> _delegate;
}

@property(readonly, nonatomic) NSSet *uuidHistory; // @synthesize uuidHistory=_uuidHistory;
@property(readonly, nonatomic) __weak id <CLKUIResourceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addUuidToHistory:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

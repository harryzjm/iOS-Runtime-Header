//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

#import <VideoSubscriberAccountUI/VSJSItemGroup-Protocol.h>

@protocol VSJSItemGroupBridge;

__attribute__((visibility("hidden")))
@interface VSJSItemGroup : IKJSObject <VSJSItemGroup>
{
    long long _selectedItem;
    id <VSJSItemGroupBridge> _bridge;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <VSJSItemGroupBridge> bridge; // @synthesize bridge=_bridge;
@property(nonatomic) long long selectedItem; // @synthesize selectedItem=_selectedItem;

@end

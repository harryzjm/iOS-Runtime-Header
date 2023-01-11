//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUI/AFContextProvider-Protocol.h>

@class SADeviceCarDNDHintContext;
@protocol SiriUICarDNDContextProviderDelegate;

@interface SiriUICarDNDContextProvider : NSObject <AFContextProvider>
{
    id <SiriUICarDNDContextProviderDelegate> _delegate;
    SADeviceCarDNDHintContext *_hintContext;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setHintContext:) SADeviceCarDNDHintContext *hintContext; // @synthesize hintContext=_hintContext;
@property(nonatomic) __weak id <SiriUICarDNDContextProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCurrentContext;
- (_Bool)allowContextProvider:(id)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUICore/NSObject-Protocol.h>

@protocol CNUIPRLikenessProvider;

@protocol CNUIPlaceholderProviderFactory <NSObject>
- (id <CNUIPRLikenessProvider>)loadingPlaceholderProvider;
- (id <CNUIPRLikenessProvider>)placeholderProvider;
@end


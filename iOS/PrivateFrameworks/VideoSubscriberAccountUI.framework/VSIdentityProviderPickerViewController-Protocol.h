//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class NSArray, NSString, UISearchController;
@protocol VSIdentityProviderPickerViewControllerDelegate;

@protocol VSIdentityProviderPickerViewController <NSObject>
@property(copy, nonatomic) NSString *resourceTitle;
@property(copy, nonatomic) NSString *requestingAppDisplayName;
@property(nonatomic) unsigned long long additionalProvidersMode;
@property(copy, nonatomic) NSArray *identityProviders;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property(nonatomic) __weak id <VSIdentityProviderPickerViewControllerDelegate> delegate;
- (void)deselectSelectedProviderAnimated:(_Bool)arg1;

@optional
@property(readonly, nonatomic) UISearchController *searchController;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PhotosUI/_PUPickerRemoteUIViewControllerHostInterface-Protocol.h>

@class NSString;
@protocol _PUPickerRemoteUIViewControllerHostInterface;

__attribute__((visibility("hidden")))
@interface PUPickerRemoteUIViewController : _UIRemoteViewController <_PUPickerRemoteUIViewControllerHostInterface>
{
    id <_PUPickerRemoteUIViewControllerHostInterface> __delegate;
}

+ (id)exportedInterface;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_PUPickerRemoteUIViewControllerHostInterface> _delegate; // @synthesize _delegate=__delegate;
- (void)_pickerDidFinishPicking:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

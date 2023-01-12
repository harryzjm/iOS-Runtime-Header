//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NTKFace, NTKFaceEditView;
@protocol NTKFaceEditingViewControllerDelegate;

@interface NTKFaceEditingViewController : UIViewController
{
    NTKFaceEditView *_editView;
    id <NTKFaceEditingViewControllerDelegate> _delegate;
    NTKFace *_face;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NTKFace *face; // @synthesize face=_face;
@property(nonatomic) __weak id <NTKFaceEditingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deactivateWithCompletion:(CDUnknownBlockType)arg1;
- (void)willDeactivate;
- (void)activate;
- (void)willActivate;
- (void)loadView;
- (void)faceColorEditOptionsChanged;
- (void)dealloc;
@property(readonly, nonatomic) long long currentEditMode;
- (id)initWithFace:(id)arg1;

@end

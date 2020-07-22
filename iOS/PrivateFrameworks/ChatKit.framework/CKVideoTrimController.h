//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <ChatKit/UINavigationControllerDelegate-Protocol.h>
#import <ChatKit/UIVideoEditorControllerDelegatePrivate-Protocol.h>

@class CKMediaObject, CKUIVideoEditorController, NSString;
@protocol CKTrimControllerDelegate;

@interface CKVideoTrimController : NSObject <UIVideoEditorControllerDelegatePrivate, UINavigationControllerDelegate>
{
    CKMediaObject *_originalMediaObject;
    CKMediaObject *_trimmedMediaObject;
    CKUIVideoEditorController *_editVideoVC;
    id <CKTrimControllerDelegate> _delegate;
}

@property(retain, nonatomic) CKUIVideoEditorController *editVideoVC; // @synthesize editVideoVC=_editVideoVC;
@property(nonatomic) __weak id <CKTrimControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKMediaObject *trimmedMediaObject; // @synthesize trimmedMediaObject=_trimmedMediaObject;
@property(retain, nonatomic) CKMediaObject *originalMediaObject; // @synthesize originalMediaObject=_originalMediaObject;
- (void).cxx_destruct;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorControllerDidCancel:(id)arg1;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)dealloc;
- (id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


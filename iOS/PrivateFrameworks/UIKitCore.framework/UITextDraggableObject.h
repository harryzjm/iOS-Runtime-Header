//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITextRange;
@protocol NSItemProviderWriting;

@interface UITextDraggableObject : NSObject
{
    id <NSItemProviderWriting> _object;
    UITextRange *_range;
    CDUnknownBlockType _targetedPreviewProvider;
    CDUnknownBlockType _previewProvider;
}

+ (id)draggableObject:(id)arg1 fromRange:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType previewProvider; // @synthesize previewProvider=_previewProvider;
@property(copy, nonatomic) CDUnknownBlockType targetedPreviewProvider; // @synthesize targetedPreviewProvider=_targetedPreviewProvider;
@property(retain, nonatomic) UITextRange *range; // @synthesize range=_range;
@property(retain, nonatomic) id <NSItemProviderWriting> object; // @synthesize object=_object;
- (void).cxx_destruct;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnotationKit/NSObject-Protocol.h>

@protocol AKAnnotationEditor;

@protocol AKAnnotationEditorDelegate <NSObject>

@optional
- (void)didShowAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)willShowAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)didHideAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)willHideAnnotationEditor:(id <AKAnnotationEditor>)arg1;
@end


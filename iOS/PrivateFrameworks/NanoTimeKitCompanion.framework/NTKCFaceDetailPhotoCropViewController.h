//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKCompanionCustomPhotosEditor, NTKDigitalTimeLabelStyle, NTKFace, _NTKCFaceDetailPhotoCropViewController;

@interface NTKCFaceDetailPhotoCropViewController
{
    _NTKCFaceDetailPhotoCropViewController *_implementationVC;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NTKDigitalTimeLabelStyle *timeStyle;
@property(readonly, nonatomic) NTKFace *face;
@property(readonly, nonatomic) NTKCompanionCustomPhotosEditor *editor;
@property(readonly, nonatomic) unsigned long long index;
- (void)viewDidLoad;
- (id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4;

@end


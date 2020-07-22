//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TTZoomController : NSObject
{
    double _zoomFactor;
    double _checklistZoomFactor;
}

@property(nonatomic) double checklistZoomFactor; // @synthesize checklistZoomFactor=_checklistZoomFactor;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
- (struct UIFont *)unzoomFont:(struct UIFont *)arg1;
- (struct UIFont *)zoomFont:(struct UIFont *)arg1;
- (id)reallyZoomAttributedString:(id)arg1 zoomDirection:(_Bool)arg2;
- (id)unzoomAttributedString:(id)arg1;
- (id)zoomAttributedString:(id)arg1;
- (id)reallyZoomAttributes:(id)arg1 zoomDirection:(_Bool)arg2;
- (id)unzoomAttributes:(id)arg1;
- (id)zoomAttributes:(id)arg1;
- (id)reallyZoomFontInAttributes:(id)arg1 zoomDirection:(_Bool)arg2;
- (id)unzoomFontInAttributes:(id)arg1;
- (id)zoomFontInAttributes:(id)arg1;
- (id)init;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXMAXElementDetectorNode, AXMIconClassDetectorNode, AXMImageNode, AXMScreenCaptureNode, AXMTextDetectorNode;

@interface AXMAXElementVisionEngine
{
    AXMScreenCaptureNode *_captureNode;
    AXMImageNode *_imageNode;
    AXMTextDetectorNode *_textDetector;
    AXMIconClassDetectorNode *_iconClassDetector;
    AXMAXElementDetectorNode *_axElementDetector;
}

- (void).cxx_destruct;
@property(nonatomic) __weak AXMAXElementDetectorNode *axElementDetector; // @synthesize axElementDetector=_axElementDetector;
@property(nonatomic) __weak AXMIconClassDetectorNode *iconClassDetector; // @synthesize iconClassDetector=_iconClassDetector;
@property(nonatomic) __weak AXMTextDetectorNode *textDetector; // @synthesize textDetector=_textDetector;
@property(nonatomic) __weak AXMImageNode *imageNode; // @synthesize imageNode=_imageNode;
@property(nonatomic) __weak AXMScreenCaptureNode *captureNode; // @synthesize captureNode=_captureNode;
- (id)initWithIdentifier:(id)arg1;

@end

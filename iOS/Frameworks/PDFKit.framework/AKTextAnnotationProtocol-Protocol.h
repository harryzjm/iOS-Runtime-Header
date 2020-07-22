//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PDFKit/NSObject-Protocol.h>

@class NSDictionary, NSTextStorage;

@protocol AKTextAnnotationProtocol <NSObject>
@property _Bool shouldUsePlaceholderText;
@property _Bool textIsClipped;
@property _Bool textIsFixedHeight;
@property _Bool textIsFixedWidth;
@property _Bool isEditingText;
@property(copy) NSDictionary *typingAttributes;
@property(retain) NSTextStorage *annotationText;
@end


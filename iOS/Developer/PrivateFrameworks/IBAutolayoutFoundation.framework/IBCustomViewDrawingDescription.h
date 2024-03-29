//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IBBinaryArchivableColor;

@interface IBCustomViewDrawingDescription : NSObject
{
    NSObject<IBBinaryArchivableColor> *_customViewOuterBorderColor;
    NSObject<IBBinaryArchivableColor> *_customViewInnerBorderColor;
    NSObject<IBBinaryArchivableColor> *_containerCustomViewBackgroundColor;
    NSObject<IBBinaryArchivableColor> *_childlessCustomViewBackgroundColor;
    NSObject<IBBinaryArchivableColor> *_containerCustomViewTextColor;
    NSObject<IBBinaryArchivableColor> *_childlessCustomViewTextColor;
    double _borderThickness;
}

- (void).cxx_destruct;
@property(nonatomic) double borderThickness; // @synthesize borderThickness=_borderThickness;
@property(copy, nonatomic) NSObject<IBBinaryArchivableColor> *childlessCustomViewTextColor; // @synthesize childlessCustomViewTextColor=_childlessCustomViewTextColor;
@property(copy, nonatomic) NSObject<IBBinaryArchivableColor> *containerCustomViewTextColor; // @synthesize containerCustomViewTextColor=_containerCustomViewTextColor;
@property(copy, nonatomic) NSObject<IBBinaryArchivableColor> *childlessCustomViewBackgroundColor; // @synthesize childlessCustomViewBackgroundColor=_childlessCustomViewBackgroundColor;
@property(copy, nonatomic) NSObject<IBBinaryArchivableColor> *containerCustomViewBackgroundColor; // @synthesize containerCustomViewBackgroundColor=_containerCustomViewBackgroundColor;
@property(copy, nonatomic) NSObject<IBBinaryArchivableColor> *customViewInnerBorderColor; // @synthesize customViewInnerBorderColor=_customViewInnerBorderColor;
@property(copy, nonatomic) NSObject<IBBinaryArchivableColor> *customViewOuterBorderColor; // @synthesize customViewOuterBorderColor=_customViewOuterBorderColor;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


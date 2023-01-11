//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/MFObject-Protocol.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPen : NSObject <MFObject>
{
    int m_penStyle;
    int m_penWidth;
    OITSUColor *m_colour;
    double *m_userStyleArray;
}

+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;
+ (id)pen;
- (int)getStyle;
- (int)getWidth;
- (id)getColor;
- (int)selectInto:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;
- (id)init;

@end


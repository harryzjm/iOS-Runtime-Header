//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class NSDictionary, NSString, PXGLayout;

@protocol PXGStringSource <PXGLayoutContentSource>
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSDictionary *)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSString *)stringAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CIMetalWrapper : CIFilter
{
    NSMutableDictionary *_dict;
    NSString *inputFilterName;
}

@property(copy) NSString *inputFilterName; // @synthesize inputFilterName;
@property(retain) NSMutableDictionary *_dict; // @synthesize _dict;
- (id)outputImage;
- (id)dummyImagesForImages:(id)arg1;
- (id)attributes;
- (id)inputKeys;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end


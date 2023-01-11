//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBGraphicalFloat, _SFPBImageOption;

@protocol _SFPBDynamicURLImageResource <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *imageOptions;
@property(nonatomic) _Bool supportsResizing;
@property(copy, nonatomic) NSString *formatURL;
@property(retain, nonatomic) _SFPBGraphicalFloat *pixelHeight;
@property(retain, nonatomic) _SFPBGraphicalFloat *pixelWidth;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBImageOption *)imageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageOptionsCount;
- (void)addImageOptions:(_SFPBImageOption *)arg1;
- (void)clearImageOptions;
@end


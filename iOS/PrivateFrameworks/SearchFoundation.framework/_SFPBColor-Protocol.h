//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBGraphicalFloat;

@protocol _SFPBColor <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasAlphaComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *alphaComponent;
@property(readonly, nonatomic) _Bool hasBlueComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *blueComponent;
@property(readonly, nonatomic) _Bool hasGreenComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *greenComponent;
@property(readonly, nonatomic) _Bool hasRedComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *redComponent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end


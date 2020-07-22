//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBImage;

@protocol _SFPBSportsTeam <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasName;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasAccessibilityDescription;
@property(copy, nonatomic) NSString *accessibilityDescription;
@property(readonly, nonatomic) _Bool hasScore;
@property(copy, nonatomic) NSString *score;
@property(readonly, nonatomic) _Bool hasRecord;
@property(copy, nonatomic) NSString *record;
@property(readonly, nonatomic) _Bool hasLogo;
@property(retain, nonatomic) _SFPBImage *logo;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end


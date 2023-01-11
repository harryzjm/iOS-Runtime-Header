//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class NSNumber, NSUUID;

@interface UIAirDropNode : NSObject <NSSecureCoding>
{
    _Bool _wantsTwoLines;
    _Bool _hasSquareImage;
    _Bool _disabled;
    _Bool _restricted;
    _Bool _peopleSuggestion;
    NSNumber *_imageSlot;
    NSNumber *_mainLabelSlot;
    NSNumber *_topLabelSlot;
    NSNumber *_bottomLabelSlot;
    NSNumber *_transportSlot;
    NSUUID *_nodeIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)nodeWithImageSlot:(id)arg1 labelSlot:(id)arg2 transportSlot:(id)arg3 isPeopleSuggestion:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic, getter=isPeopleSuggestion) _Bool peopleSuggestion; // @synthesize peopleSuggestion=_peopleSuggestion;
@property(nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool hasSquareImage; // @synthesize hasSquareImage=_hasSquareImage;
@property(nonatomic) _Bool wantsTwoLines; // @synthesize wantsTwoLines=_wantsTwoLines;
@property(retain) NSUUID *nodeIdentifier; // @synthesize nodeIdentifier=_nodeIdentifier;
@property(retain) NSNumber *transportSlot; // @synthesize transportSlot=_transportSlot;
@property(retain) NSNumber *bottomLabelSlot; // @synthesize bottomLabelSlot=_bottomLabelSlot;
@property(retain) NSNumber *topLabelSlot; // @synthesize topLabelSlot=_topLabelSlot;
@property(retain) NSNumber *mainLabelSlot; // @synthesize mainLabelSlot=_mainLabelSlot;
@property(retain) NSNumber *imageSlot; // @synthesize imageSlot=_imageSlot;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface _Body
{
    BOOL _animationDirection;
    BOOL _animationFrame;
    BOOL _frameDisplayTime60th;
    unsigned char _state;
    unsigned char _waitingForFootRaise;
    float _width;
    float _height;
    float _curBodyX;
    NSArray *_texs;
    NSMutableArray *_shiftTexs12;
    NSMutableArray *_shiftTexs14;
    NSMutableArray *_shiftTexs23;
    NSMutableArray *_shiftTexs13;
    union _GLKVector2 _bone;
    union _GLKVector2 _offset;
}

@property(nonatomic) unsigned char waitingForFootRaise; // @synthesize waitingForFootRaise=_waitingForFootRaise;
@property(nonatomic) unsigned char state; // @synthesize state=_state;
@property(nonatomic) BOOL frameDisplayTime60th; // @synthesize frameDisplayTime60th=_frameDisplayTime60th;
@property(nonatomic) BOOL animationFrame; // @synthesize animationFrame=_animationFrame;
@property(nonatomic) BOOL animationDirection; // @synthesize animationDirection=_animationDirection;
@property(nonatomic) float curBodyX; // @synthesize curBodyX=_curBodyX;
@property(nonatomic) union _GLKVector2 offset; // @synthesize offset=_offset;
@property(nonatomic) union _GLKVector2 bone; // @synthesize bone=_bone;
@property(retain, nonatomic) NSMutableArray *shiftTexs13; // @synthesize shiftTexs13=_shiftTexs13;
@property(retain, nonatomic) NSMutableArray *shiftTexs23; // @synthesize shiftTexs23=_shiftTexs23;
@property(retain, nonatomic) NSMutableArray *shiftTexs14; // @synthesize shiftTexs14=_shiftTexs14;
@property(retain, nonatomic) NSMutableArray *shiftTexs12; // @synthesize shiftTexs12=_shiftTexs12;
@property(retain, nonatomic) NSArray *texs; // @synthesize texs=_texs;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (void).cxx_destruct;

@end


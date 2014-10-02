//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, TSDGLDataBuffer, TSDGLDataBufferAttribute, TSDGLShader;

__attribute__((visibility("hidden")))
@interface TSDGLParticleSystem : NSObject
{
    char *_visibilities;
    BOOL _isInitialized;
    BOOL _isDataBufferInitialized;
    unsigned int _textureCount;
    BOOL _hasParticleTexture;
    BOOL _shouldDraw;
    unsigned int _particleCount;
    unsigned int _visibleParticleCount;
    unsigned int _particlesWide;
    unsigned int _particlesHigh;
    float _duration;
    unsigned int _direction;
    TSDGLDataBufferAttribute *_positionAttribute;
    TSDGLDataBufferAttribute *_centerAttribute;
    TSDGLDataBufferAttribute *_texCoordAttribute;
    TSDGLDataBufferAttribute *_particleTexCoordAttribute;
    TSDGLDataBufferAttribute *_colorAttribute;
    TSDGLDataBufferAttribute *_lifeSpanAttribute;
    TSDGLDataBufferAttribute *_speedAttribute;
    TSDGLDataBufferAttribute *_rotationAttribute;
    TSDGLDataBufferAttribute *_scaleAttribute;
    TSDGLDataBuffer *_dataBuffer;
    TSDGLShader *_shader;
    struct CGSize _particleSize;
    struct CGSize _objectSize;
    struct CGSize _slideSize;
}

+ (BOOL)useGLSL;
+ (BOOL)willOverrideVisibilities;
+ (BOOL)shouldDrawInvisibleParticles;
+ (BOOL)willOverrideColors;
+ (BOOL)willOverrideStartingPoints;
+ (BOOL)willOverrideGeometry;
+ (unsigned int)numberOfVerticesPerParticle;
+ (id)newDataBufferAttributeWithName:(id)arg1;
@property(readonly, nonatomic) BOOL shouldDraw; // @synthesize shouldDraw=_shouldDraw;
@property(readonly, nonatomic) TSDGLShader *shader; // @synthesize shader=_shader;
@property(readonly, nonatomic) TSDGLDataBuffer *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *scaleAttribute; // @synthesize scaleAttribute=_scaleAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *rotationAttribute; // @synthesize rotationAttribute=_rotationAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *speedAttribute; // @synthesize speedAttribute=_speedAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *lifeSpanAttribute; // @synthesize lifeSpanAttribute=_lifeSpanAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *colorAttribute; // @synthesize colorAttribute=_colorAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *particleTexCoordAttribute; // @synthesize particleTexCoordAttribute=_particleTexCoordAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *texCoordAttribute; // @synthesize texCoordAttribute=_texCoordAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *centerAttribute; // @synthesize centerAttribute=_centerAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *positionAttribute; // @synthesize positionAttribute=_positionAttribute;
@property(readonly, nonatomic) unsigned int direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) float duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) struct CGSize slideSize; // @synthesize slideSize=_slideSize;
@property(readonly, nonatomic) struct CGSize objectSize; // @synthesize objectSize=_objectSize;
@property(readonly, nonatomic) struct CGSize particleSize; // @synthesize particleSize=_particleSize;
@property(readonly, nonatomic) unsigned int particlesHigh; // @synthesize particlesHigh=_particlesHigh;
@property(readonly, nonatomic) unsigned int particlesWide; // @synthesize particlesWide=_particlesWide;
@property(readonly, nonatomic) unsigned int visibleParticleCount; // @synthesize visibleParticleCount=_visibleParticleCount;
@property(readonly, nonatomic) unsigned int particleCount; // @synthesize particleCount=_particleCount;
- (void)drawGLSLWithPercent:(float)arg1 opacity:(float)arg2;
- (void)setupGLSL;
- (BOOL)visibilityAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_f2e236b6)colorAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_b2fbf00d)lifeSpanAtIndexPoint:(struct CGPoint)arg1;
- (float)scaleAtIndexPoint:(struct CGPoint)arg1;
- (float)rotationMax;
- (CDStruct_03942939)rotationAtIndexPoint:(struct CGPoint)arg1;
- (float)speedMax;
- (CDStruct_03942939)speedAtIndexPoint:(struct CGPoint)arg1;
- (struct CGPoint)startingPointAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_b2fbf00d)centerAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_b2fbf00d)vertexPositionAtVertexIndex:(unsigned int)arg1 particleIndexPoint:(struct CGPoint)arg2;
- (struct CGContext *)newContextFromTexture:(id)arg1;
@property(readonly, nonatomic) NSArray *dataBufferAttributes;
- (struct CGPoint)indexPointFromIndex:(unsigned int)arg1;
- (unsigned int)indexFromPoint:(struct CGPoint)arg1;
- (id)description;
- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize)arg2 reverseDrawOrder:(BOOL)arg3;
- (void)dealloc;
- (id)initWithNumberOfParticles:(unsigned int)arg1 objectSize:(struct CGSize)arg2 slideSize:(struct CGSize)arg3 duration:(float)arg4 direction:(unsigned int)arg5 shader:(id)arg6;
- (id)initWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(float)arg5 direction:(unsigned int)arg6 shader:(id)arg7;
- (void)p_logParticleInformation;
- (struct CGSize)p_particleSystemSizeWithRequestedNumber:(unsigned int)arg1 objectSize:(struct CGSize)arg2;
- (void)p_reverseParticleDataDrawOrder;
- (void)p_setupVertexData;
- (void)p_setupParticleDataWithTexture:(id)arg1;
- (void)p_setupDataBufferWithParticleCount:(unsigned int)arg1 visibleParticleCount:(unsigned int)arg2;
- (void)p_setDataBufferAttribute:(id *)arg1 withName:(id)arg2 defaultDataType:(int)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long)arg5;

@end

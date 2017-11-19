
#ifndef _MODELCLASS_H_
#define _MODELCLASS_H_



// INCLUDES //
#include <d3d11.h>
#include <directxmath.h>
#include "Texture.h"
#include <fstream>
using namespace std;
using namespace DirectX;

// Class name: ModelClass
class Models
{
private:
	struct VertexType
	{
		XMFLOAT3 position;
		XMFLOAT4 color;		
		XMFLOAT3 normal;
	};

	struct ModelType
	{
		float x, y, z;
		float tu, tv;
		float nx, ny, nz;
	};

public:
	Models();
	Models(const Models&);
	~Models();
	bool Initialise(ID3D11Device*, ID3D11DeviceContext*, char*);
	void Shutdown();
	void Render(ID3D11DeviceContext*);

	int GetIndexCount();
	ID3D11ShaderResourceView* GetTexture();

private:
	bool InitializeBuffers(ID3D11Device*);
	void ShutdownBuffers();
	void RenderBuffers(ID3D11DeviceContext*);
	bool LoadTexture(ID3D11Device*, ID3D11DeviceContext*, char*);
	void ReleaseTexture();

private:
	ID3D11Buffer *m_vertexBuffer, *m_indexBuffer;
	int m_vertexCount, m_indexCount;
	//Texture* m_Texture;
};

#endif
